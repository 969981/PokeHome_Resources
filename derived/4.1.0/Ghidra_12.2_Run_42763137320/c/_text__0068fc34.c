/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0068fc34; name: FUN_.text__0068fc34
 */


void FUN__text__0068fc34(long param_1,uint param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  
  if (*(uint *)(param_1 + 0x1ba8) != param_2) {
    nn::fontll::ScalableFontEngine::SetFont(*(char **)(param_1 + 8));
    nn::fontll::ScalableFontEngine::GetError();
    nn::fontll::ScalableFontEngine::SetBoldWeight((int)*(undefined8 *)(param_1 + 8));
    nn::fontll::ScalableFontEngine::GetError();
    uVar1 = *(undefined8 *)(param_1 + 8);
    uVar2 = 0;
    if (*(char *)(*(long *)(param_1 + 0x1c00) + (ulong)param_2) != '\0') {
      nn::fontll::ScalableFontEngine::SetOutlineWidth((ushort)uVar1);
      uVar1 = *(undefined8 *)(param_1 + 8);
      uVar2 = 2;
    }
    nn::fontll::ScalableFontEngine::SetFlags(uVar1,uVar2);
    nn::fontll::ScalableFontEngine::GetError();
    *(uint *)(param_1 + 0x1ba8) = param_2;
  }
  return;
}


