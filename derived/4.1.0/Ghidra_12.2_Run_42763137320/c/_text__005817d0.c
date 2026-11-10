/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005817d0; name: FUN_.text__005817d0
 */


void FUN__text__005817d0(long *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  uint local_24;
  
  local_24 = (uint)*(ushort *)(param_2 + 2);
  uVar1 = (**(code **)(*param_1 + 0x60))(param_1,&local_24);
  *(undefined4 *)((long)param_2 + 0xc) = uVar1;
  *(short *)((long)param_2 + 0x12) = (short)local_24;
  memset((void *)*param_2,0,(ulong)(*(int *)((long)param_1 + 0xc) * local_24));
  return;
}


