/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004652c4; name: FUN_.text__004652c4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004652c4(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4
                        ,int param_5)

{
  undefined4 *puVar1;
  long lVar2;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  int local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined2 local_44;
  undefined1 local_42;
  
  puVar1 = (undefined4 *)FUN__text__004cfb50(0x3f800000,param_3,0xb);
  if (puVar1 == (undefined4 *)0x0) {
    return;
  }
  if (*(long *)(puVar1 + 2) != 0) {
    FUN__text__0042f65c(param_1,*_DAT_008a4648,*(long *)(puVar1 + 2),0xb,param_5,param_4,0);
    return;
  }
  if (param_5 != 0) {
    local_58 = *puVar1;
    uStack_60 = 0xb;
    local_48 = 0xf;
    local_44 = 0x100;
    local_42 = 0;
    local_68 = param_3;
    uStack_54 = param_1;
    local_50 = param_5;
    uStack_4c = param_4;
    lVar2 = FUN__text__0042f18c(*_DAT_008a4648,&local_68,0);
    *(long *)(puVar1 + 2) = lVar2;
    if (lVar2 != 0) {
      return;
    }
  }
  FUN__text__004cfc90(param_1,param_3,0xb,1);
  return;
}


