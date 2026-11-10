/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002b79ac; name: FUN_.text__002b79ac
 */


void FUN__text__002b79ac(long param_1)

{
  ulong uVar1;
  time_t local_f8;
  undefined1 auStack_f0 [208];
  undefined8 local_8;
  
  uVar1 = nn::time::IsInitialized();
  if ((uVar1 & 1) == 0) {
    nn::time::Initialize();
  }
  memset((void *)(param_1 + 0x108),0,0x134);
  local_8 = FUN__text__005ead58();
  local_f8 = FUN__text__005eadd4(&local_8);
  localtime_r(&local_f8,(tm *)(param_1 + 0x110));
  *(time_t *)(param_1 + 0x150) = local_f8;
  FUN__text__005ead30(auStack_f0);
  memcpy((void *)(param_1 + 0x168),auStack_f0,0xd0);
  FUN__text__002b7a34(param_1);
  return;
}


