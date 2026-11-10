/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00303cd8; name: FUN_.text__00303cd8
 */


void FUN__text__00303cd8(long param_1,long *param_2,int *param_3,undefined4 *param_4)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  
  if (0 < (int)*(uint *)(param_1 + 0x700fdc)) {
    lVar5 = *param_2;
    lVar4 = 0;
    iVar2 = 0;
    uVar3 = 5;
    do {
      lVar1 = param_1 + lVar4;
      if (lVar5 == *(long *)(lVar1 + 0x2f0)) {
        uVar3 = 0;
LAB__text__00303fb4:
        *param_3 = iVar2;
        *param_4 = uVar3;
        return;
      }
      if (lVar5 == *(long *)(lVar1 + 0x620)) {
        uVar3 = 1;
        goto LAB__text__00303fb4;
      }
      if (lVar5 == *(long *)(lVar1 + 0x950)) {
        uVar3 = 2;
        goto LAB__text__00303fb4;
      }
      if (lVar5 == *(long *)(lVar1 + 0xc80)) {
        uVar3 = 3;
        goto LAB__text__00303fb4;
      }
      if (lVar5 == *(long *)(lVar1 + 0xfb0)) {
        uVar3 = 4;
        goto LAB__text__00303fb4;
      }
      if (lVar5 == *(long *)(lVar1 + 0x12e0)) goto LAB__text__00303fb4;
      if (lVar5 == *(long *)(lVar1 + 0x1610)) {
        uVar3 = 6;
        goto LAB__text__00303fb4;
      }
      if (lVar5 == *(long *)(lVar1 + 0x1940)) {
        uVar3 = 7;
        goto LAB__text__00303fb4;
      }
      if (lVar5 == *(long *)(lVar1 + 0x1c70)) {
        uVar3 = 8;
        goto LAB__text__00303fb4;
      }
      if (lVar5 == *(long *)(lVar1 + 0x1fa0)) {
        uVar3 = 9;
        goto LAB__text__00303fb4;
      }
      if (lVar5 == *(long *)(lVar1 + 0x22d0)) {
        uVar3 = 10;
        goto LAB__text__00303fb4;
      }
      if (lVar5 == *(long *)(lVar1 + 0x2600)) {
        uVar3 = 0xb;
        goto LAB__text__00303fb4;
      }
      if (lVar5 == *(long *)(lVar1 + 0x2930)) {
        uVar3 = 0xc;
        goto LAB__text__00303fb4;
      }
      if (lVar5 == *(long *)(lVar1 + 0x2c60)) {
        uVar3 = 0xd;
        goto LAB__text__00303fb4;
      }
      if (lVar5 == *(long *)(lVar1 + 0x2f90)) {
        uVar3 = 0xe;
        goto LAB__text__00303fb4;
      }
      if (lVar5 == *(long *)(lVar1 + 0x32c0)) {
        uVar3 = 0xf;
        goto LAB__text__00303fb4;
      }
      if (lVar5 == *(long *)(lVar1 + 0x35f0)) {
        uVar3 = 0x10;
        goto LAB__text__00303fb4;
      }
      if (lVar5 == *(long *)(lVar1 + 0x3920)) {
        uVar3 = 0x11;
        goto LAB__text__00303fb4;
      }
      if (lVar5 == *(long *)(lVar1 + 0x3c50)) {
        uVar3 = 0x12;
        goto LAB__text__00303fb4;
      }
      if (lVar5 == *(long *)(lVar1 + 0x3f80)) {
        uVar3 = 0x13;
        goto LAB__text__00303fb4;
      }
      if (lVar5 == *(long *)(lVar1 + 0x42b0)) {
        uVar3 = 0x14;
        goto LAB__text__00303fb4;
      }
      if (lVar5 == *(long *)(lVar1 + 0x45e0)) {
        uVar3 = 0x15;
        goto LAB__text__00303fb4;
      }
      if (lVar5 == *(long *)(lVar1 + 0x4910)) {
        uVar3 = 0x16;
        goto LAB__text__00303fb4;
      }
      if (lVar5 == *(long *)(lVar1 + 0x4c40)) {
        uVar3 = 0x17;
        goto LAB__text__00303fb4;
      }
      if (lVar5 == *(long *)(lVar1 + 0x4f70)) {
        uVar3 = 0x18;
        goto LAB__text__00303fb4;
      }
      if (lVar5 == *(long *)(lVar1 + 0x52a0)) {
        uVar3 = 0x19;
        goto LAB__text__00303fb4;
      }
      if (lVar5 == *(long *)(lVar1 + 0x55d0)) {
        uVar3 = 0x1a;
        goto LAB__text__00303fb4;
      }
      if (lVar5 == *(long *)(lVar1 + 0x5900)) {
        uVar3 = 0x1b;
        goto LAB__text__00303fb4;
      }
      if (lVar5 == *(long *)(lVar1 + 0x5c30)) {
        uVar3 = 0x1c;
        goto LAB__text__00303fb4;
      }
      if (lVar5 == *(long *)(lVar1 + 0x5f60)) {
        uVar3 = 0x1d;
        goto LAB__text__00303fb4;
      }
      lVar4 = lVar4 + 0x5fa0;
      iVar2 = iVar2 + 1;
    } while ((ulong)*(uint *)(param_1 + 0x700fdc) * 0x5fa0 != lVar4);
  }
  return;
}


