/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0059c87c; name: FUN_.text__0059c87c
 */


void FUN__text__0059c87c(undefined8 *param_1)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  plVar2 = (long *)param_1[1];
  uVar4 = param_1[4];
  uVar1 = param_1[2];
  uVar3 = param_1[3];
  (**(code **)*param_1)();
                    /* WARNING: Could not recover jumptable at 0x0059c8c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x18))(plVar2,uVar1,uVar3,uVar4);
  return;
}


