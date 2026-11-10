/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00638bb8; name: FUN_.text__00638bb8
 */


int FUN__text__00638bb8(undefined8 param_1,undefined8 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  
  cVar2 = FUN__text__005ff0fc(param_1,param_2,param_4);
  if ((byte)(cVar2 + 2U) < 3) {
    return *(int *)((long)(char)(cVar2 + 2U) * 4 + 0x759f00);
  }
  iVar1 = 0;
  if (param_3 != 2) {
    iVar1 = param_3;
  }
  return iVar1;
}


