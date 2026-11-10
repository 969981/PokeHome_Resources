/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005e9290; name: FUN_.text__005e9290
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005e9290(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *param_2;
  puVar1 = (undefined8 *)&DAT_007216c0;
  if (lVar5 != 0) {
    puVar1 = (undefined8 *)(lVar5 + 0x58);
  }
  puVar2 = _DAT_0089f5d0;
  if (lVar5 != 0) {
    puVar2 = (undefined8 *)(lVar5 + 0x60);
  }
  uVar4 = *puVar2;
  if (lVar5 == 0) {
    *param_1 = *puVar1;
    param_1[1] = uVar4;
    param_1[2] = 0;
    param_1[3] = 0;
    return;
  }
  *param_1 = *puVar1;
  param_1[1] = uVar4;
  lVar3 = *(long *)(lVar5 + 0x48);
  param_1[2] = *(undefined8 *)(lVar5 + 0x68);
  (**(code **)(lVar3 + 0x10))();
  param_1[3] = lVar5;
  return;
}


