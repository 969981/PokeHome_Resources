/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00303fd0; name: FUN_.text__00303fd0
 */


bool FUN__text__00303fd0(long param_1,long *param_2,int *param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  bool bVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  
  if (param_3 != (int *)0x0) {
    param_3[0] = -1;
    param_3[1] = -1;
    uVar3 = *(uint *)(param_1 + 0x700fdc);
    if (0 < (int)uVar3) {
      lVar8 = *param_2;
      lVar7 = 0;
      uVar5 = 1;
      iVar6 = 5;
      bVar4 = true;
      do {
        lVar1 = param_1 + lVar7;
        if ((*(int *)(lVar1 + 0x340) != 0) && (*(long *)(lVar1 + 0x348) == lVar8)) {
          iVar6 = 0;
LAB__text__003043cc:
          *param_3 = (int)uVar5 + -1;
          param_3[1] = iVar6;
          return bVar4;
        }
        if ((*(int *)(lVar1 + 0x670) != 0) && (*(long *)(lVar1 + 0x678) == lVar8)) {
          iVar6 = 1;
          goto LAB__text__003043cc;
        }
        if ((*(int *)(lVar1 + 0x9a0) != 0) && (*(long *)(lVar1 + 0x9a8) == lVar8)) {
          iVar6 = 2;
          goto LAB__text__003043cc;
        }
        if ((*(int *)(lVar1 + 0xcd0) != 0) && (*(long *)(lVar1 + 0xcd8) == lVar8)) {
          iVar6 = 3;
          goto LAB__text__003043cc;
        }
        if ((*(int *)(lVar1 + 0x1000) != 0) && (*(long *)(lVar1 + 0x1008) == lVar8)) {
          iVar6 = 4;
          goto LAB__text__003043cc;
        }
        if ((*(int *)(lVar1 + 0x1330) != 0) && (*(long *)(lVar1 + 0x1338) == lVar8))
        goto LAB__text__003043cc;
        if ((*(int *)(lVar1 + 0x1660) != 0) && (*(long *)(lVar1 + 0x1668) == lVar8)) {
          iVar6 = 6;
          goto LAB__text__003043cc;
        }
        if ((*(int *)(lVar1 + 0x1990) != 0) && (*(long *)(lVar1 + 0x1998) == lVar8)) {
          iVar6 = 7;
          goto LAB__text__003043cc;
        }
        if ((*(int *)(lVar1 + 0x1cc0) != 0) && (*(long *)(lVar1 + 0x1cc8) == lVar8)) {
          iVar6 = 8;
          goto LAB__text__003043cc;
        }
        if ((*(int *)(lVar1 + 0x1ff0) != 0) && (*(long *)(lVar1 + 0x1ff8) == lVar8)) {
          iVar6 = 9;
          goto LAB__text__003043cc;
        }
        if ((*(int *)(lVar1 + 0x2320) != 0) && (*(long *)(lVar1 + 9000) == lVar8)) {
          iVar6 = 10;
          goto LAB__text__003043cc;
        }
        if ((*(int *)(lVar1 + 0x2650) != 0) && (*(long *)(lVar1 + 0x2658) == lVar8)) {
          iVar6 = 0xb;
          goto LAB__text__003043cc;
        }
        if ((*(int *)(lVar1 + 0x2980) != 0) && (*(long *)(lVar1 + 0x2988) == lVar8)) {
          iVar6 = 0xc;
          goto LAB__text__003043cc;
        }
        if ((*(int *)(lVar1 + 0x2cb0) != 0) && (*(long *)(lVar1 + 0x2cb8) == lVar8)) {
          iVar6 = 0xd;
          goto LAB__text__003043cc;
        }
        if ((*(int *)(param_1 + 0x2fe0 + lVar7) != 0) && (*(long *)(lVar1 + 0x2fe8) == lVar8)) {
          iVar6 = 0xe;
          goto LAB__text__003043cc;
        }
        lVar2 = param_1 + 0x2fe0 + lVar7;
        if ((*(int *)(lVar2 + 0x330) != 0) && (*(long *)(lVar1 + 0x3318) == lVar8)) {
          iVar6 = 0xf;
          goto LAB__text__003043cc;
        }
        if ((*(int *)(lVar2 + 0x660) != 0) && (*(long *)(lVar1 + 0x3648) == lVar8)) {
          iVar6 = 0x10;
          goto LAB__text__003043cc;
        }
        if ((*(int *)(lVar2 + 0x990) != 0) && (*(long *)(lVar1 + 0x3978) == lVar8)) {
          iVar6 = 0x11;
          goto LAB__text__003043cc;
        }
        if ((*(int *)(lVar2 + 0xcc0) != 0) && (*(long *)(lVar1 + 0x3ca8) == lVar8)) {
          iVar6 = 0x12;
          goto LAB__text__003043cc;
        }
        if ((*(int *)(lVar2 + 0xff0) != 0) && (*(long *)(lVar1 + 0x3fd8) == lVar8)) {
          iVar6 = 0x13;
          goto LAB__text__003043cc;
        }
        if ((*(int *)(lVar2 + 0x1320) != 0) && (*(long *)(lVar1 + 0x4308) == lVar8)) {
          iVar6 = 0x14;
          goto LAB__text__003043cc;
        }
        if ((*(int *)(lVar2 + 0x1650) != 0) && (*(long *)(lVar1 + 0x4638) == lVar8)) {
          iVar6 = 0x15;
          goto LAB__text__003043cc;
        }
        if ((*(int *)(lVar2 + 0x1980) != 0) && (*(long *)(lVar1 + 0x4968) == lVar8)) {
          iVar6 = 0x16;
          goto LAB__text__003043cc;
        }
        if ((*(int *)(lVar2 + 0x1cb0) != 0) && (*(long *)(lVar1 + 0x4c98) == lVar8)) {
          iVar6 = 0x17;
          goto LAB__text__003043cc;
        }
        if ((*(int *)(lVar2 + 0x1fe0) != 0) && (*(long *)(lVar1 + 0x4fc8) == lVar8)) {
          iVar6 = 0x18;
          goto LAB__text__003043cc;
        }
        if ((*(int *)(lVar2 + 0x2310) != 0) && (*(long *)(lVar1 + 0x52f8) == lVar8)) {
          iVar6 = 0x19;
          goto LAB__text__003043cc;
        }
        if ((*(int *)(lVar2 + 0x2640) != 0) && (*(long *)(lVar1 + 0x5628) == lVar8)) {
          iVar6 = 0x1a;
          goto LAB__text__003043cc;
        }
        if ((*(int *)(lVar2 + 0x2970) != 0) && (*(long *)(lVar1 + 0x5958) == lVar8)) {
          iVar6 = 0x1b;
          goto LAB__text__003043cc;
        }
        if ((*(int *)(lVar2 + 0x2ca0) != 0) && (*(long *)(lVar1 + 0x5c88) == lVar8)) {
          iVar6 = 0x1c;
          goto LAB__text__003043cc;
        }
        if ((*(int *)(lVar2 + 0x2fd0) != 0) && (*(long *)(lVar1 + 0x5fb8) == lVar8)) {
          iVar6 = 0x1d;
          goto LAB__text__003043cc;
        }
        bVar4 = uVar5 < uVar3;
        lVar7 = lVar7 + 0x5fa0;
        uVar5 = uVar5 + 1;
        if ((ulong)uVar3 * 0x5fa0 == lVar7) {
          return bVar4;
        }
      } while( true );
    }
  }
  return false;
}


