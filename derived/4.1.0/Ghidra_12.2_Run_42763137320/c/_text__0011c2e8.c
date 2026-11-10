/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0011c2e8; name: FUN_.text__0011c2e8
 */


void FUN__text__0011c2e8(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 local_8;
  
  uVar1 = nn::time::IsInitialized();
  if ((uVar1 & 1) == 0) {
    nn::time::Initialize();
  }
  local_8 = FUN__text__005ead58();
  uVar2 = FUN__text__005eadd4(&local_8);
  *(undefined8 *)(param_1 + 0x50) = uVar2;
  *(undefined1 *)(param_1 + 0x58) = 1;
  return;
}


