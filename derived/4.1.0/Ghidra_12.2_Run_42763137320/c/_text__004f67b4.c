/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004f67b4; name: FUN_.text__004f67b4
 */


void FUN__text__004f67b4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  
  bVar3 = (**(code **)(*(long *)param_2[1] + 0x108))();
  *(byte *)(param_1 + 0x129) = (bVar3 ^ 0xff) & 1;
  uVar1 = *param_2;
  uVar2 = param_2[1];
  *(undefined1 *)(param_1 + 0x12a) = 0;
  *(undefined8 *)(param_1 + 0x108) = uVar1;
  *(undefined8 *)(param_1 + 0x110) = uVar2;
  return;
}


