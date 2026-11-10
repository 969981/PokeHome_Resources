/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00661b7c; name: FUN_.text__00661b7c
 */


int FUN__text__00661b7c(undefined8 param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_18;
  
  lVar3 = *param_2;
  param_2[0xbe] = 0x6400000003;
  param_2[0xbf] = 0x4000000000000004;
  *(undefined4 *)(param_2 + 0xc0) = 2;
  local_40 = 0;
  local_38 = 0;
  *(uint *)((long)param_2 + 0x604) = (uint)(*(long *)(*(long *)(lVar3 + 0xd8) + 0x70) != 0);
  param_2[0xc1] = 3;
  local_18 = param_1;
  lVar2 = FUN__text__00686934(param_2 + 0xab,0x50,param_2 + 0xbe,3);
  if (lVar2 == 0) {
    FUN__text__0066713c(*param_2,0x70fd0f);
    FUN__text__0065fd64(&local_18);
    iVar1 = 2;
  }
  else {
    param_2[0xb5] = lVar2;
    iVar1 = FUN__text__0065659c(*param_2,param_2 + 0xab,lVar2,&local_38,&local_40);
    if (iVar1 == 0) {
      iVar1 = FUN__text__00660068(&local_18,0x7206c6,0x70bccc,local_38);
      FUN__text__006783e4(local_38);
      *(undefined4 *)(lVar3 + 0x19c) = 1;
    }
    else {
      FUN__text__0065fd64(&local_18);
    }
  }
  return iVar1;
}


