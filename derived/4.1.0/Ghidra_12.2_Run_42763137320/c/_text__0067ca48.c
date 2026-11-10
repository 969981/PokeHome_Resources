/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0067ca48; name: FUN_.text__0067ca48
 */


ulong FUN__text__0067ca48(long param_1,long param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  
  if (*(int *)(param_2 + 8) == 0) {
    if ((*(byte *)(param_2 + 0xd) & 1) == 0) {
      if (*(char *)(param_1 + 0x960) == '\0') {
        *(undefined4 *)(param_1 + 0x96c) = 0xffffffff;
        *(undefined1 *)(param_1 + 0x960) = 1;
      }
      if (*(long *)(param_2 + 0x10) != 0) {
        lVar6 = 0;
        uVar3 = 0;
        do {
          uVar2 = *(int *)(*(long *)(param_2 + 0x18) + lVar6) - 1;
          if (uVar2 < 8) {
                    /* WARNING: Could not emulate address calculation at 0x0067cb08 */
                    /* WARNING: Treating indirect jump as call */
            uVar3 = (*(code *)(&UNK__text__0067cb14 + (ulong)*(byte *)((ulong)uVar2 + 0x7618d4) * 4)
                    )();
            return uVar3;
          }
          uVar3 = uVar3 + 1;
          lVar6 = lVar6 + 8;
        } while (uVar3 < *(ulong *)(param_2 + 0x10));
      }
      if (((param_3 == 0) && (iVar1 = FUN__text__0067b1e8(param_1), iVar1 == 0)) &&
         (uVar2 = FUN__text__0067cdc0(param_1,1,0,0), uVar2 != 0)) {
        if ((int)uVar2 < -900) {
          return (ulong)uVar2;
        }
        uVar3 = FUN__text__0067c768(param_1,param_2,0xfffffdea,0);
        return uVar3 & 0xffffffff;
      }
LAB__text__0067ccd8:
      if ((*(code **)(param_1 + 0x7e8) == (code *)0x0) ||
         (iVar1 = (**(code **)(param_1 + 0x7e8))(param_1,param_2,*(undefined8 *)(param_1 + 0x8b8)),
         iVar1 == 0)) {
        uVar3 = 0;
      }
      else {
        uVar3 = 0xfffffc7a;
      }
      return uVar3;
    }
    if (*(long *)(param_2 + 0x10) != 0) {
      uVar4 = 0x7178a1;
      uVar2 = 0xfffffdf6;
      goto LAB__text__0067ca8c;
    }
    puVar5 = *(undefined8 **)(param_1 + 0x8e0);
    if (puVar5 != (undefined8 *)0x0) {
      uVar2 = FUN__text__0067c8c0(param_1,puVar5[1],puVar5[2]);
      *(undefined8 *)(param_1 + 0x8e0) = *puVar5;
      FUN__text__006809e4(param_1 + 0x890,puVar5[1]);
      FUN__text__006809e4(param_1 + 0x890,puVar5);
      if (uVar2 == 0) goto LAB__text__0067ccd8;
      if ((int)uVar2 < -900) {
        return (ulong)uVar2;
      }
      uVar4 = 0;
      goto LAB__text__0067ca8c;
    }
    uVar4 = 0x7158de;
  }
  else {
    uVar4 = 0x710aaf;
  }
  uVar2 = 0xfffffe07;
LAB__text__0067ca8c:
  uVar3 = FUN__text__0067c768(param_1,param_2,uVar2,uVar4);
  return uVar3;
}


