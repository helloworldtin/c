typedef unsigned char BYTE;
typedef unsigned short WORD;
typedef unsigned long DWORD ;

union regs{
    struct {
        DWORD eax, ebx, ecx, edx;
    }d;

    struct {
        WORD ax;
        WORD ax_dummy;

        WORD bx;
        WORD bx_dummy;

        WORD cx;
        WORD cx_dummy;

        WORD dx;
        WORD dx_dummy;
    } w;

    struct {
        BYTE al, ah, eax_dummy1, eax_dummy2;
        BYTE bl, bh, ebx_dummy1, ebx_dymmy2;
        BYTE cl, ch, ecx_dummy1, ecx_dummy2;
        BYTE dl, dh, edx_dummy1, edx_dymmt2;
    } b;
};

int main(void)
{
    return 0;
}
