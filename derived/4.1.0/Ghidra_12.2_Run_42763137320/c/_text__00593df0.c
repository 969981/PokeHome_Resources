/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00593df0; name: FUN_.text__00593df0
 */


void FUN__text__00593df0(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x48,0x72051d,0x23e);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[3] = 0;
    *(undefined4 *)(puVar1 + 3) = 0xffffffff;
    puVar1[8] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *(undefined8 *)((long)puVar1 + 0x1c) = 0;
    *(undefined8 *)((long)puVar1 + 0x22) = 0;
    *puVar1 = 0x893cc8;
    *(undefined4 *)((long)puVar1 + 0x2c) = 0x3f800000;
    puVar1[6] = 0;
    puVar1[7] = 0;
  }
  return;
}


