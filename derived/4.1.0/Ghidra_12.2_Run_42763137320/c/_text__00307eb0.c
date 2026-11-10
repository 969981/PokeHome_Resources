/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00307eb0; name: FUN_.text__00307eb0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__00307eb0(long param_1)

{
  uint uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  int *piVar7;
  
  iVar3 = FUN__text__00631008(*(undefined8 *)(param_1 + 0x58));
  piVar7 = (int *)&DAT_00734494;
  iVar4 = _DAT_00734494;
  do {
    if (iVar4 == iVar3) {
LAB__text__00307f54:
      iVar4 = FUN__text__00634570(*(undefined8 *)(param_1 + 0x58));
      lVar5 = FUN__text__00321ac0();
      if (iVar4 == *(int *)(lVar5 + 0x7b074)) {
        FUN__text__00631008(*(undefined8 *)(param_1 + 0x58));
        lVar5 = FUN__text__00325bc0();
        uVar1 = *(int *)(lVar5 + 0x2c) - 1;
        if (uVar1 < 10) {
                    /* WARNING: Could not emulate address calculation at 0x00307fa4 */
                    /* WARNING: Treating indirect jump as call */
          uVar6 = (*(code *)((ulong)*(byte *)((ulong)uVar1 + 0x733c70) * 4 + 0x307fb0))();
          return uVar6;
        }
        uVar6 = 0;
      }
      else {
        uVar6 = 1;
      }
      return uVar6;
    }
    if (piVar7 + 1 == (int *)0x734648) {
      sVar2 = FUN__text__00631010(*(undefined8 *)(param_1 + 0x58));
      if (iVar3 != 0x29e) {
        return 1;
      }
      if (sVar2 != 5) {
        return 1;
      }
      goto LAB__text__00307f54;
    }
    if (((piVar7[1] == iVar3) || (piVar7[2] == iVar3)) || (piVar7[3] == iVar3))
    goto LAB__text__00307f54;
    piVar7 = piVar7 + 4;
    iVar4 = *piVar7;
  } while( true );
}


