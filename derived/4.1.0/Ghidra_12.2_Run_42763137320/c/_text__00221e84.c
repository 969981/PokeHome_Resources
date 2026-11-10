/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00221e84; name: FUN_.text__00221e84
 */


void FUN__text__00221e84(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_28;
  
  lVar1 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x729430);
  *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) | 1;
  local_28 = 0x431e769ffc1ad350;
  uVar2 = FUN__text__0012cf48(param_1 + 0x110,&local_28);
  FUN__text__003a14e8(uVar2,1);
  uVar2 = FUN__text__0012cbe0(param_1 + 0x110,0x70ee35);
  FUN__text__003a14e8(uVar2,1);
  lVar1 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x7293b0);
  *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
  lVar1 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x729438);
  *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) | 1;
  return;
}


