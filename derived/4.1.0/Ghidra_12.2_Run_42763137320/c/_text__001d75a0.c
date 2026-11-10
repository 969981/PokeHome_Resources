/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001d75a0; name: FUN_.text__001d75a0
 */


void FUN__text__001d75a0(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = param_1[0x1142];
  *param_1 = 0x86e2b0;
  if (lVar1 != 0) {
    param_1[0x1143] = lVar1;
    (**(code **)(*(long *)param_1[0x1145] + 0x18))
              ((long *)param_1[0x1145],lVar1,param_1[0x1144] - lVar1,8);
  }
  if (param_1[0x113e] != 0) {
    (**(code **)(*(long *)(param_1[0x113e] + 0x48) + 0x18))();
    param_1[0x113e] = 0;
  }
  if (param_1[0x113d] != 0) {
    (**(code **)(*(long *)(param_1[0x113d] + 0x48) + 0x18))();
    param_1[0x113d] = 0;
  }
  lVar1 = param_1[0x113a];
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    param_1[0x113a] = 0;
  }
  return;
}


