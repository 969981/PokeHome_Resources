/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00691574; name: FUN_.text__00691574
 */


void FUN__text__00691574(long param_1,uint param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  
  lVar1 = param_1 + (ulong)param_3 * 4;
  if (*(uint *)(lVar1 + 0x1bac) != param_2) {
    nn::fontll::ScalableFontEngine::SetFont
              ((char *)(*(long *)(param_1 + 0x10) + (ulong)param_3 * 0xb8));
    nn::fontll::ScalableFontEngine::GetError();
    nn::fontll::ScalableFontEngine::SetBoldWeight
              ((int)*(undefined8 *)(param_1 + 0x10) + param_3 * 0xb8);
    nn::fontll::ScalableFontEngine::GetError();
    lVar2 = *(long *)(param_1 + 0x10) + (ulong)param_3 * 0xb8;
    uVar3 = 0;
    if (*(char *)(*(long *)(param_1 + 0x1c00) + (ulong)param_2) != '\0') {
      nn::fontll::ScalableFontEngine::SetOutlineWidth((ushort)lVar2);
      uVar3 = 2;
      lVar2 = *(long *)(param_1 + 0x10) + (ulong)param_3 * 0xb8;
    }
    nn::fontll::ScalableFontEngine::SetFlags(lVar2,uVar3);
    nn::fontll::ScalableFontEngine::GetError();
    *(uint *)(lVar1 + 0x1bac) = param_2;
  }
  return;
}


