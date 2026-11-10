/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0036ccd4; name: FUN_.text__0036ccd4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0036ccd4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined8 local_38;
  undefined8 local_18;
  
  lVar1 = FUN__text__00321ac0();
  if (*(char *)(lVar1 + 0x9349d) == '\0') {
    local_18 = (ulong)local_18._4_4_ << 0x20;
    puVar3 = (undefined4 *)(param_1 + 0x9afc);
    uVar2 = FUN__text__00371260(*_DAT_0089f448,&local_18);
    local_18 = 0x4b00;
    FUN__text__0036cfb0(uVar2,0x7352f8,param_1 + 0x60,&local_18);
    FUN__text__0035d030(uVar2,0x73530c,param_1 + 0x9a50);
    local_18 = 0x2790;
    FUN__text__0036d1f0(uVar2,0x7352fc,param_1 + 0x4b60,&local_18);
    FUN__text__0035d030(uVar2,0x735300,param_1 + 0x9a52);
    local_18 = 0x2760;
    FUN__text__0036d430(uVar2,0x735304,param_1 + 0x72f0,&local_18);
    FUN__text__0035d030(uVar2,0x735308,param_1 + 0x9a54);
    FUN__text__0035cbe0(uVar2,0x735310,param_1 + 0x9a56);
    FUN__text__0035cbe0(uVar2,0x735314,param_1 + 0x9a57);
    local_18 = param_1 + 0x9a58;
    local_38 = 0xa0;
    FUN__text__0036d670(uVar2,0x735318,&local_18,&local_38);
    param_1 = param_1 + 0x9af8;
  }
  else {
    local_18 = (ulong)local_18._4_4_ << 0x20;
    puVar3 = (undefined4 *)(param_1 + 0x1359c);
    uVar2 = FUN__text__00371260(*_DAT_0089f448,&local_18);
    local_18 = 0x4b00;
    FUN__text__0036cfb0(uVar2,0x7352f8,param_1 + 0x9b00,&local_18);
    FUN__text__0035d030(uVar2,0x73530c,param_1 + 0x134f0);
    local_18 = 0x2790;
    FUN__text__0036d1f0(uVar2,0x7352fc,param_1 + 0xe600,&local_18);
    FUN__text__0035d030(uVar2,0x735300,param_1 + 0x134f2);
    local_18 = 0x2760;
    FUN__text__0036d430(uVar2,0x735304,param_1 + 0x10d90,&local_18);
    FUN__text__0035d030(uVar2,0x735308,param_1 + 0x134f4);
    FUN__text__0035cbe0(uVar2,0x735310,param_1 + 0x134f6);
    FUN__text__0035cbe0(uVar2,0x735314,param_1 + 0x134f7);
    local_18 = param_1 + 0x134f8;
    local_38 = 0xa0;
    FUN__text__0036d670(uVar2,0x735318,&local_18,&local_38);
    param_1 = param_1 + 0x13598;
  }
  FUN__text__00364260(uVar2,0x73531c,param_1);
  local_18 = CONCAT71(local_18._1_7_,(char)*puVar3);
  FUN__text__0036c210(uVar2,0x735320,&local_18);
  return;
}


