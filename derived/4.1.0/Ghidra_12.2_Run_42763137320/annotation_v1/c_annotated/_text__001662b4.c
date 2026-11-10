/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_000662B4
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001662b4; name: FUN_.text__001662b4
 */


void FUN__text__001662b4(long param_1,uint param_2,undefined4 param_3,int param_4,int param_5) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_80; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_78; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_70; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_60 [5]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar1 = (param_4 + param_5 * 2) - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar1 < 7) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Could not emulate address calculation at 0x001662f0 */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK__text__001662fc + (ulong)*(byte *)((ulong)uVar1 + 0x7252b7) * 4))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  local_80 = 0x25cb3746f1af731d; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_78 = 0x714490; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_70 = 0x17; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_68 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__0015b030(local_60,&local_80,0xb); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar2 = FUN__text__00165374(param_1,*(undefined8 *)(param_1 + 0x170),local_60,param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (param_2 < *(uint *)(param_1 + 0x1a0)) { // [自动静态注释] 条件判断/分支
    uVar3 = *(undefined8 *)(param_1 + 0x170); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(ulong *)(*(long *)(param_1 + 0x1a8) + (ulong)param_2 * 0x18 + 8) = uVar2 & 0xffff | 0x20000;
    FUN__text__005f3280(*(undefined8 *)(*(long *)(param_1 + 0x1a8) + (ulong)param_2 * 0x18),uVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined2 *)(*(long *)(param_1 + 0x1a8) + (ulong)param_2 * 0x18 + 0x10) = 0;
    lVar4 = *(long *)(param_1 + 0x1a8) + (ulong)param_2 * 0x18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(ushort *)(lVar4 + 0x12) = *(ushort *)(lVar4 + 0x12) & 0xfffe;
  } // [自动静态注释] 作用域/控制流边界
  if ((local_60[3] != 0) && (local_60[0] != 0)) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(local_60[0] + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  local_60[0] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_60[1] = 0xcbf29ce484222645; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_60[2] = 0x70f683; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_60[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (local_60[4] != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(local_60[4] + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  local_60[4] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_38 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (local_68 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


