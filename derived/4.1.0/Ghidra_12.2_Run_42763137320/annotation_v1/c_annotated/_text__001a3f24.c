/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_000A3F24
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001a3f24; name: FUN_.text__001a3f24
 */


void FUN__text__001a3f24(undefined1 param_1 [16],undefined4 param_2,long param_3,undefined4 *param_4 // [自动静态注释] 调用尚未恢复正式名称的函数
                        ) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uStack_34; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_18; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uStack_14; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar1 = *(long *)(*(long *)(param_3 + 8) + 0x2d0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar1 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  local_18 = FUN__text__003c7a60(lVar1,param_3 + 0x80); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar2 = param_4[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_14 = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_38 = FUN__text__0019693c(*param_4,&local_18); // [自动静态注释] 调用尚未恢复正式名称的函数
  uStack_34 = uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__003c7960(lVar1,param_3 + 0x88,&local_38); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_18 = FUN__text__003c7a60(lVar1,param_3 + 0x180); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar3 = param_4[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_14 = uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_38 = FUN__text__0019693c(*param_4,&local_18); // [自动静态注释] 调用尚未恢复正式名称的函数
  uStack_34 = uVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__003c7960(lVar1,param_3 + 0x188,&local_38); // [自动静态注释] 调用尚未恢复正式名称的函数
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


