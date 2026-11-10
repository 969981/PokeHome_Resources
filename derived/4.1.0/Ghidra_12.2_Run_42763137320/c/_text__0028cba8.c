/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0028cba8; name: FUN_.text__0028cba8
 */


void FUN__text__0028cba8(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  lVar2 = *param_1;
  *(undefined8 *)(lVar2 + 0x870) = 0xcbf29ce484222645;
  FUN__text__0012bca0(lVar2 + 0x110,0);
  local_28 = 0x431e769ffc1ad350;
  uVar1 = FUN__text__0012ce7c(lVar2 + 0x110,&local_28);
  FUN__text__003a14e8(uVar1,0);
  *(undefined1 *)(lVar2 + 0x868) = 1;
  return;
}


