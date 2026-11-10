/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002ADA20
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003ada20; name: FUN_.text__003ada20
 */


void FUN__text__003ada20(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_80; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_78; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_70; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_60; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_3c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uStack_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_34; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar1 = *(long *)(param_1 + 0x98); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar1 != 0) { // [自动静态注释] 条件判断/分支
    plVar2 = (long *)(lVar1 + 0x48); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    (**(code **)(*plVar2 + 0x10))(plVar2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    (**(code **)(*plVar2 + 0x10))(plVar2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  uStack_68 = *(undefined8 *)(param_1 + 0x710); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_70 = *(undefined8 *)(param_1 + 0x720); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_58 = *(undefined8 *)(param_1 + 0x728); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_60 = *(undefined8 *)(param_1 + 0x718); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_78 = *(undefined8 *)(param_1 + 0x708); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_48 = *(undefined8 *)(param_1 + 0x738); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_40 = *(undefined1 *)(param_1 + 0x740); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_50 = *(undefined8 *)(param_1 + 0x730); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_34 = *(undefined4 *)(param_1 + 0x744); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_38 = *(undefined4 *)(param_1 + 0x6c0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_3c = *(undefined4 *)(*(long *)(param_1 + 0x800) + 0xc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_80 = lVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__003b6864(*(undefined8 *)(param_1 + 0x7e0),&local_80); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__003b6b04((float)*(int *)(*(long *)(param_1 + 0x800) + 0x10), // [自动静态注释] 调用尚未恢复正式名称的函数
                      *(undefined8 *)(param_1 + 0x7e0));
  if (lVar1 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  if (local_80 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(local_80 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


