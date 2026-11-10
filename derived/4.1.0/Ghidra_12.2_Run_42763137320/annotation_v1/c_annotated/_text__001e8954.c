/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_000E8954
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001e8954; name: FUN_.text__001e8954
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__001e8954(long param_1,undefined8 *param_2,int param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar4 = *(long *)(param_1 + 0x78); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(lVar4 + 8) = param_2[3];
  FUN__text__00139e64(*param_2,*(undefined4 *)(param_2 + 2)); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (*(int *)(param_2 + 1) == 0) { // [自动静态注释] 条件判断/分支
    FUN__text__0013a0d0(*param_2,0,*(undefined4 *)(param_2 + 2)); // [自动静态注释] 调用尚未恢复正式名称的函数
    lVar2 = *(long *)(*(long *)(param_1 + 0xa8) + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__0013a1b8(); // [自动静态注释] 调用尚未恢复正式名称的函数
    lVar2 = *(long *)(*(long *)(param_1 + 0xa8) + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (lVar2 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  if (param_3 - 0xbU < 0xfffffff4) { // [自动静态注释] 条件判断/分支
    param_3 = -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  iVar1 = FUN__text__0019c594(param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar3 = *(undefined8 *)(param_1 + 0x78); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_28 = *(undefined8 *)(_DAT_008a0700 + (long)iVar1 * 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_48 = lVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar2 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__001ac1fc(uVar3,param_2 + 4,&local_48,&local_28); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (local_48 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    local_48 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (lVar2 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  *(undefined8 *)(lVar4 + 8) = 0;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


