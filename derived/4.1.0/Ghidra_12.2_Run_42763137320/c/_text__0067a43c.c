/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0067a43c; name: FUN_.text__0067a43c
 */


void FUN__text__0067a43c(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_1 == 0) {
    return;
  }
  lVar1 = param_1 + 0x890;
  puVar3 = *(undefined8 **)(param_1 + 0x8e0);
  while (puVar3 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar3;
    FUN__text__006809e4(lVar1,puVar3[1]);
    FUN__text__006809e4(lVar1,puVar3);
    puVar3 = puVar2;
  }
  FUN__text__00685b28(param_1 + 0x20);
  FUN__text__006806c8(param_1,FUN__text__0067a54c,param_1);
  FUN__text__006806bc(param_1);
  FUN__text__0067a5c0(param_1 + 0x108,lVar1);
  FUN__text__0067a5c0(param_1 + 0x120,lVar1);
  FUN__text__0067a5c0(param_1 + 0x138,lVar1);
  FUN__text__0067a610(param_1 + 0x150,lVar1);
  FUN__text__0067a654(param_1);
  thunk_FUN__text__00680bfc(param_1 + 0x290);
  FUN__text__00680c74(param_1 + 0x6e8);
  FUN__text__00683464(param_1 + 0x158);
  FUN__text__006809e4(lVar1,param_1);
  return;
}


