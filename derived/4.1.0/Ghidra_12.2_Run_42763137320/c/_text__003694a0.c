/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003694a0; name: FUN_.text__003694a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003694a0(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 local_38;
  undefined4 local_14;
  
  puVar1 = _DAT_0089f448;
  local_14 = 0;
  uVar2 = FUN__text__00371260(*_DAT_0089f448,&local_14);
  local_38 = 0x1f50;
  FUN__text__00369620(uVar2,_DAT_008a3038,param_1 + 0x60,&local_38);
  local_14 = 0;
  uVar2 = FUN__text__00371260(*puVar1,&local_14);
  local_38 = 0x50c20;
  FUN__text__00369860(uVar2,_DAT_008a3040,param_1 + 0x1fb0,&local_38);
  local_14 = 0;
  uVar2 = FUN__text__00371260(*puVar1,&local_14);
  local_38 = 0x538;
  FUN__text__00369aa0(uVar2,_DAT_008a3048,param_1 + 0x52be8,&local_38);
  local_38._0_4_ = *(undefined4 *)(param_1 + 0x52bd8);
  uVar2 = FUN__text__00371260(*puVar1,0x8aadf0);
  FUN__text__00360ba0(uVar2,0x8aadf4,&local_38);
  local_38._0_4_ = *(undefined4 *)(param_1 + 0x52bd0);
  uVar2 = FUN__text__00371260(*puVar1,0x8aadf8);
  FUN__text__00360ba0(uVar2,0x8aadfc,&local_38);
  local_38 = CONCAT44(local_38._4_4_,*(undefined4 *)(param_1 + 0x52bd4));
  uVar2 = FUN__text__00371260(*puVar1,0x8aae00);
  FUN__text__00360ba0(uVar2,0x8aae04,&local_38);
  local_38 = *(undefined8 *)(param_1 + 0x52be0);
  uVar2 = FUN__text__00371260(*puVar1,0x8aae08);
  FUN__text__0036b370(uVar2,0x8aae0c,&local_38);
  local_38 = CONCAT71(local_38._1_7_,*(undefined1 *)(param_1 + 0x53120));
  uVar2 = FUN__text__00371260(*puVar1,0x8aae10);
  FUN__text__0036baa0(uVar2,0x8aae14,&local_38);
  return;
}


