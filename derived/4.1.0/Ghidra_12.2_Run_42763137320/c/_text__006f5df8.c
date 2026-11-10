/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006f5df8; name: FUN_.text__006f5df8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006f5df8(long *param_1,char *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  FUN__text__006ebf50();
  uVar2 = nvnBootstrapLoader(0x70f430);
  if ((*param_2 != '\0') && (pcVar3 = (code *)nvnBootstrapLoader(0x714de5), pcVar3 != (code *)0x0))
  {
    (*pcVar3)(&DAT__text__006f2b2c,0);
  }
  FUN__text__006ee770(0,uVar2);
  FUN__text__006f21f4(0x37,0xf);
  local_40 = 0;
  uStack_38 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  (*(code *)*_DAT_008a7050)(&local_70);
  (*(code *)*_DAT_008a7058)(&local_70,0);
  *param_1 = (long)(param_1 + 1);
  (*(code *)*_DAT_008a7068)(param_1 + 1,&local_70);
  FUN__text__006ee770(*param_1,uVar2);
  uVar1 = FUN__text__006f23c8(*param_1);
  *(undefined4 *)((long)param_1 + 0x300c) = uVar1;
  *(byte *)((long)param_1 + 0x3009) = *(byte *)((long)param_1 + 0x3009) & 0xfe;
  *(undefined1 *)(param_1 + 0x601) = 1;
  return;
}


