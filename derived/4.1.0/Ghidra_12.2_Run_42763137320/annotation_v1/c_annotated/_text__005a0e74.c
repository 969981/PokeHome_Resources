/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004A0E74
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005a0e74; name: FUN_.text__005a0e74
 */


void FUN__text__005a0e74(long *param_1,long *param_2,undefined8 param_3,int param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*param_1 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(*param_1 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *param_1 = 0;
  } // [自动静态注释] 作用域/控制流边界
  lVar2 = *param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_2 = 0;
  local_40 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_38 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_1 = lVar2;
  thunk_FUN__text__006ec64c(lVar2 + 0x58,&local_40); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__006ee5ac(param_3,param_4 << 1,&local_40, // [自动静态注释] 调用尚未恢复正式名称的函数
                      (long)*(int *)(*param_1 + 0xc4) * (long)*(int *)(*param_1 + 0xc0)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  FUN__text__006ee624(param_3,param_1 + 5,param_4 << 1); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_40 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_38 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  thunk_FUN__text__006ec64c(*param_1 + 200,&local_40); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar1 = param_4 << 1 | 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__006ee5ac(param_3,uVar1,&local_40, // [自动静态注释] 调用尚未恢复正式名称的函数
                      (long)*(int *)(*param_1 + 0xc4) * (long)*(int *)(*param_1 + 0xc0)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  FUN__text__006ee624(param_3,param_1 + 6,uVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


