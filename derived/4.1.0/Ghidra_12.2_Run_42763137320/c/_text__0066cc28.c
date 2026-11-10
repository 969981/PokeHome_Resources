/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0066cc28; name: FUN_.text__0066cc28
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__0066cc28(long *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *param_1;
  lVar2 = lVar4 + 0x820;
  *(uint *)((long)param_1 + 0x3fc) = *(uint *)((long)param_1 + 0x3fc) & 0xfffeffff;
  *(uint *)(lVar4 + 0x1c0) = *(uint *)(lVar4 + 0x1c0) & 0xfffffffd;
  if ((*(byte *)(param_1[0x84] + 0x80) & 3) != 0) {
    if (**(long **)(lVar4 + 0x1e8) != 0) {
      lVar2 = **(long **)(lVar4 + 0x1e8);
    }
  }
  if (*(long *)(lVar4 + 0x6e8) != 0) {
    return 0;
  }
  if (*(int *)(lVar4 + 0xa38) - 3U < 2) {
    uVar3 = FUN__text__00657f9c(lVar2);
    if ((int)uVar3 == 0) {
      return uVar3;
    }
    uVar3 = 0x71eb4b;
LAB__text__0066cca8:
    FUN__text__0066713c(lVar4,uVar3);
  }
  else {
    if (*(long *)(lVar4 + 0x6f0) == 0) {
      if (*(long *)(lVar4 + 0x740) == 0) {
        if ((*(long *)(lVar4 + 0x1528) == _DAT_008a65c0) &&
           (iVar1 = fseek(*(FILE **)(lVar4 + 0x1530),0,0), iVar1 != -1)) {
          return 0;
        }
        uVar3 = 0x714a91;
        goto LAB__text__0066cca8;
      }
      FUN__text__0065cab0(lVar4,1);
      iVar1 = (**(code **)(lVar4 + 0x740))(lVar4,1,*(undefined8 *)(lVar4 + 0x7a0));
      FUN__text__0065cab0(lVar4,0);
      FUN__text__00666f74(lVar4,0x714a71,iVar1);
      if (iVar1 == 0) {
        return 0;
      }
      uVar3 = 0x7109f5;
    }
    else {
      FUN__text__0065cab0(lVar4,1);
      iVar1 = (**(code **)(lVar4 + 0x6f0))(*(undefined8 *)(lVar4 + 0x778),0,0);
      FUN__text__0065cab0(lVar4,0);
      if (iVar1 == 0) {
        return 0;
      }
      uVar3 = 0x71b0d7;
    }
    FUN__text__0066713c(lVar4,uVar3,iVar1);
  }
  return 0x41;
}


