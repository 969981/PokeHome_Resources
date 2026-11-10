/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004B4F8C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005b4f8c; name: FUN_.text__005b4f8c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005b4f8c(long param_1,undefined4 param_2,long param_3,int param_4,undefined8 param_5 // [自动静态注释] 调用尚未恢复正式名称的函数
                        ) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_70; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_60; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  local_50 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_48 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__006ebbe4(&local_50); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_50 = CONCAT44(param_2,(int)(param_4 * param_3)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = FUN__text__006ec37c(_DAT_008a0448,&local_50); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__005a5684(&local_70,param_5,0,param_4 * param_3,uVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined8 *)(param_1 + 0x48) = local_70;
  if (*(long *)(param_1 + 0x50) != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(*(long *)(param_1 + 0x50) + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  lVar1 = local_68; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_70 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_68 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(param_1 + 0x50) = lVar1;
  *(undefined8 *)(param_1 + 0x58) = local_60;
  *(undefined8 *)(param_1 + 0x60) = local_58;
  local_60 = 0xffffffffffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_58 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__005b509c(&local_70); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (local_68 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  uVar2 = FUN__text__005b50f0((undefined8 *)(param_1 + 0x48)); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__006ec4cc(param_1,_DAT_008a0448,&local_50,uVar2,*(undefined8 *)(param_1 + 0x58), // [自动静态注释] 调用尚未恢复正式名称的函数
                      *(undefined8 *)(param_1 + 0x60));
  *(int *)(param_1 + 0x68) = (int)param_3;
  *(int *)(param_1 + 0x6c) = param_4;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


