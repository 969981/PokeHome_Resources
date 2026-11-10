/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00193ec0; name: FUN_.text__00193ec0
 */


void FUN__text__00193ec0(undefined8 param_1,undefined8 *param_2,long *param_3,undefined4 param_4)

{
  ulong uVar1;
  undefined1 uStack_40;
  undefined1 local_3f;
  undefined1 uStack_3e;
  undefined1 local_3d;
  undefined1 uStack_3c;
  undefined1 local_3b;
  undefined1 uStack_3a;
  undefined1 uStack_39;
  undefined1 uStack_38;
  undefined1 uStack_37;
  undefined1 uStack_36;
  undefined2 uStack_35;
  
  if ((*param_3 == 0) || (uVar1 = FUN__text__00306588(), (uVar1 & 1) != 0)) {
    *param_2 = 0;
    return;
  }
  uStack_38 = 0;
  uStack_37 = 0;
  uStack_36 = 0;
  uStack_35 = 0;
  uStack_40 = 0;
  local_3f = 0;
  uStack_3e = 0;
  local_3d = 0;
  uStack_3c = 0;
  local_3b = 0;
  uStack_3a = 0;
  uStack_39 = 0;
  FUN__text__00307180(*param_3,&uStack_40,param_4);
  *(undefined1 *)((long)param_2 + 1) = local_3f;
  *(undefined1 *)((long)param_2 + 4) = local_3b;
  *(undefined1 *)((long)param_2 + 3) = uStack_39;
  *(undefined1 *)((long)param_2 + 5) = uStack_38;
  *(undefined1 *)((long)param_2 + 2) = local_3d;
  *(undefined1 *)((long)param_2 + 7) = uStack_36;
  return;
}


