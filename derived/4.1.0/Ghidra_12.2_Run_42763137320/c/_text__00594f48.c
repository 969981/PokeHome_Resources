/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00594f48; name: FUN_.text__00594f48
 */


void FUN__text__00594f48(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *(undefined2 *)(param_1 + 1) = 0;
  *param_1 = 0x893d28;
  uVar2 = *(undefined8 *)(param_2 + 0x14);
  uVar3 = *(undefined8 *)(param_2 + 0x1c);
  uVar4 = *(undefined8 *)(param_2 + 0x24);
  *(undefined4 *)((long)param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  uVar1 = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)((long)param_1 + 0x1c) = uVar3;
  *(undefined8 *)((long)param_1 + 0x24) = uVar4;
  *(undefined8 *)((long)param_1 + 0x14) = uVar2;
  *(undefined1 *)((long)param_1 + 0x2c) = 1;
  *(undefined8 *)((long)param_1 + 0xc) = uVar1;
  param_1[6] = *(undefined8 *)(param_2 + 0x30);
  *(undefined1 *)((long)param_1 + 0x34) = 1;
  *(undefined2 *)(param_1 + 1) = 0xffff;
  return;
}


