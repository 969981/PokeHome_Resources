/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005cdc04; name: FUN_.text__005cdc04
 */


void FUN__text__005cdc04(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar5 = *(long *)(param_1 + 0x1a8);
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
  }
  puVar4 = DAT_008e1498;
  DAT_008e1498 = (undefined8 *)0x0;
  if (puVar4 == (undefined8 *)0x0) {
    return;
  }
  plVar2 = (long *)puVar4[1];
  uVar6 = puVar4[4];
  uVar1 = puVar4[2];
  uVar3 = puVar4[3];
  (**(code **)*puVar4)();
                    /* WARNING: Could not recover jumptable at 0x005cdc7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x18))(plVar2,uVar1,uVar3,uVar6);
  return;
}


