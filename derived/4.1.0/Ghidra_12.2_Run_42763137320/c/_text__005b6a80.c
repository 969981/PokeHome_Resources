/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005b6a80; name: FUN_.text__005b6a80
 */


void FUN__text__005b6a80(long *param_1)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  if (param_1[1] == 0) {
    lVar5 = 0;
  }
  else {
    uVar7 = 0;
    do {
      puVar4 = *(undefined8 **)(*param_1 + uVar7 * 8);
      plVar2 = (long *)puVar4[1];
      uVar6 = puVar4[4];
      uVar1 = puVar4[2];
      uVar3 = puVar4[3];
      (**(code **)*puVar4)();
      (**(code **)(*plVar2 + 0x18))(plVar2,uVar1,uVar3,uVar6);
      (**(code **)(*plVar2 + 0x90))(plVar2);
      uVar7 = uVar7 + 1;
    } while (uVar7 < (ulong)param_1[1]);
    lVar5 = param_1[1] << 3;
  }
                    /* WARNING: Could not recover jumptable at 0x005b6b2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[2] + 0x18))((long *)param_1[2],*param_1,lVar5,8);
  return;
}


