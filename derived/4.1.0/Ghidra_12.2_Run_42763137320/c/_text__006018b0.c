/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006018b0; name: FUN_.text__006018b0
 */


void FUN__text__006018b0(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)param_1[1];
  *param_1 = 0x898890;
  param_1[1] = 0;
  if (puVar2 == (undefined8 *)0x0) {
    return;
  }
  uVar1 = param_1[3];
  if (0x19f < uVar1) {
    uVar1 = uVar1 / 0x1a0;
    puVar3 = puVar2;
    do {
      (**(code **)*puVar3)(puVar3);
      uVar1 = uVar1 - 1;
      puVar3 = puVar3 + 0x34;
    } while (uVar1 != 0);
    uVar1 = param_1[3];
  }
                    /* WARNING: Could not recover jumptable at 0x00601944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[2] + 0x18))((long *)param_1[2],puVar2,uVar1,param_1[4]);
  return;
}


