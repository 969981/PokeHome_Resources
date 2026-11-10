/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00673f40; name: FUN_.text__00673f40
 */


undefined8
FUN__text__00673f40(undefined8 *param_1,undefined4 param_2,long param_3,long param_4,long *param_5)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long local_38;
  
  *param_5 = 0;
  local_38 = 0;
  iVar1 = FUN__text__0064fa18(*param_1,0,1);
  if (-1 < iVar1) {
    lVar4 = 0;
    do {
      iVar1 = FUN__text__00666b6c(param_2,0xffffffff,0xffffffff,iVar1);
      if (iVar1 < 1) {
        return 0xffffffff;
      }
      uVar2 = FUN__text__006677ac(param_2,param_3,param_4,&local_38);
      lVar3 = param_4;
      if ((int)uVar2 != 0x51) {
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        lVar3 = param_4 - local_38;
        if (lVar3 == 0) {
          *param_5 = param_4 + lVar4;
          return 0;
        }
        if (local_38 == 0) {
          return 0xffffffff;
        }
        param_3 = param_3 + local_38;
        lVar4 = local_38 + lVar4;
      }
      iVar1 = FUN__text__0064fa18(*param_1,0,1);
      param_4 = lVar3;
    } while (-1 < iVar1);
  }
  return 0x1c;
}


