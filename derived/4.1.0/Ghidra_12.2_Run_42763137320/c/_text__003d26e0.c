/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d26e0; name: FUN_.text__003d26e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003d26e0(long *param_1,undefined8 param_2,uint param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long local_178;
  long local_170;
  long local_168;
  long local_160;
  long local_158;
  undefined4 local_150;
  char acStack_144 [260];
  
  lVar3 = *(long *)(*_DAT_0089f4f0 + 0x80);
  if (lVar3 != 0) {
    plVar2 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  uVar1 = FUN__text__00114ad0(lVar3 + 0x1b0,param_2,param_3 & 1);
  memset(acStack_144,0,0x104);
  snprintf(acStack_144,0x104,(char *)0x71e842,uVar1);
  FUN__text__003d212c(&local_178,acStack_144);
  if ((param_1[3] != 0) && (*param_1 != 0)) {
    (**(code **)(*(long *)(*param_1 + 0x48) + 0x18))();
  }
  *param_1 = 0;
  param_1[1] = -0x340d631b7bddd9bb;
  param_1[2] = 0x70f683;
  param_1[3] = 0;
  if (param_1[4] != 0) {
    (**(code **)(*(long *)(param_1[4] + 0x48) + 0x18))();
  }
  lVar3 = local_158;
  local_158 = 0;
  param_1[3] = local_160;
  param_1[4] = lVar3;
  param_1[1] = local_170;
  param_1[2] = local_168;
  *(undefined4 *)(param_1 + 5) = local_150;
  if ((local_160 != 0) && (*param_1 != 0)) {
    (**(code **)(*(long *)(*param_1 + 0x48) + 0x18))();
  }
  lVar3 = local_178;
  local_178 = 0;
  local_170 = 0xcbf29ce484222645;
  *param_1 = lVar3;
  local_168 = 0x70f683;
  local_160 = 0;
  if (local_158 != 0) {
    (**(code **)(*(long *)(local_158 + 0x48) + 0x18))();
  }
  return;
}


