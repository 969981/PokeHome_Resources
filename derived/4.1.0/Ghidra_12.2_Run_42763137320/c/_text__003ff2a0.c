/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003ff2a0; name: FUN_.text__003ff2a0
 */


void FUN__text__003ff2a0(undefined8 param_1,undefined8 *param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN__text__00400f80(7,0x28);
  *param_3 = (long)puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_2[1];
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(undefined2 *)((long)puVar1 + 0x24) = 0;
    *puVar1 = 0;
    puVar1[1] = uVar2;
    *(undefined4 *)(puVar1 + 4) = 0xffffffff;
    *(undefined4 *)(*param_3 + 0x18) = *(undefined4 *)(param_2 + 3);
    *(undefined8 *)*param_3 = *param_2;
  }
  return;
}


