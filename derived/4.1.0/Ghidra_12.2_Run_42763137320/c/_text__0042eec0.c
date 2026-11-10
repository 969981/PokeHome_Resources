/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0042eec0; name: FUN_.text__0042eec0
 */


void FUN__text__0042eec0(undefined4 param_1,long param_2,ulong param_3,ulong param_4)

{
  ushort uVar1;
  long *plVar2;
  ushort *puVar3;
  ulong uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  
  puVar3 = *(ushort **)(param_2 + 0x20);
  if (puVar3 != (ushort *)0x0) {
    uVar1 = *puVar3;
    uVar5 = (uint)uVar1;
    if (uVar1 < 2) {
      uVar5 = 1;
    }
    uVar4 = (ulong)uVar5;
    plVar2 = (long *)((long)puVar3 + ((ulong)((uint)uVar1 * 2 + 9) & 0x3fff8) + 8);
    do {
      puVar3 = puVar3 + 1;
      if ((uint)*puVar3 == ((uint)param_3 & 0xffff)) {
        uVar7 = (undefined4)plVar2[-1];
        *(undefined4 *)(plVar2 + -1) = param_1;
        if (((param_4 & 1) == 0) || (*plVar2 == 0)) {
          iVar6 = 0;
        }
        else {
          iVar6 = 1;
          *plVar2 = 0;
        }
        goto LAB__text__0042ef58;
      }
      plVar2 = plVar2 + 2;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  iVar6 = 0;
  uVar7 = 0x3f800000;
  if (((uint)param_3 >> 0x10 & 0xff) != 3) {
    uVar7 = 0;
  }
LAB__text__0042ef58:
  plVar2 = *(long **)(param_2 + 0x18);
  if ((char)plVar2[1] != '\0') {
    (**(code **)(*plVar2 + 0x48))
              (uVar7,plVar2,param_3,param_3 >> 0x10,*(undefined4 *)(param_2 + 0x38),iVar6);
  }
  if (iVar6 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0042ef94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_2 + 0x18) + 0x18))();
  return;
}


