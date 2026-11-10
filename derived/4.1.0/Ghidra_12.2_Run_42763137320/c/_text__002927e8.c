/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002927e8; name: FUN_.text__002927e8
 */


void FUN__text__002927e8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 local_18;
  
  *(undefined1 *)(param_1 + 0x868) = 0;
  lVar1 = param_1 + 0x110;
  lVar2 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x731718);
  local_18 = 0x431e779ffc1ad503;
  uVar3 = FUN__text__0012ce7c(lVar1,&local_18);
  FUN__text__003a14e8(uVar3,(*(byte *)(lVar2 + 0x58) & 1) == 0);
  local_18 = 0xc35056d0249a792;
  plVar4 = (long *)FUN__text__0012cdb0(lVar1,&local_18);
  (**(code **)(*plVar4 + 0x50))();
  uVar3 = FUN__text__0012cb14(lVar1,0x731060);
  FUN__text__003a14e8(uVar3,1);
  FUN__text__00128ec0(param_1,0);
  FUN__text__00128ca0(param_1,1,1);
  return;
}


