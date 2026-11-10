/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0064b7e8; name: FUN_.text__0064b7e8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0064b7e8(undefined8 *param_1,char *param_2)

{
  size_t sVar1;
  char *__string;
  undefined8 *puVar2;
  
  param_1[0xe] = (char *)param_1[7];
  strncpy((char *)param_1[7],param_2,0x1ffffff);
  __string = (char *)param_1[0xe];
  sVar1 = strnlen(__string,0x1ffffff);
  *(int *)(param_1 + 0xf) = (int)sVar1;
  puVar2 = param_1 + 0xd;
  *(int *)puVar2 = (int)sVar1;
  param_1[0x10] = __string;
  FUN__text__00667b2c(*param_1,0x2f,1);
  FUN__text__00667b2c(*param_1,0x4e2c,_DAT_008a6530);
  FUN__text__00667b2c(*param_1,0x2719,puVar2);
  FUN__text__00667b2c(*param_1,0x3c,*(undefined4 *)puVar2);
  FUN__text__00667b2c(*param_1,0x4ec7,_DAT_008a6538);
  FUN__text__00667b2c(*param_1,0x27b8,puVar2);
  return;
}


