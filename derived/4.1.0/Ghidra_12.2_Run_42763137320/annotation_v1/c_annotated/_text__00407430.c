/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00307430
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00407430; name: FUN_.text__00407430
 */


void FUN__text__00407430(long param_1,undefined8 *param_2,undefined8 param_3,int *param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                        undefined4 *param_5) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_70; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint local_60; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_5c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_54; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_4c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  local_70 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_68 = 0x2b00000000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_54 = 0x3f800000ffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_60 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_5c = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_4c = 0x1ffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((*(char *)(param_1 + 0x9c) != '\0') || (*param_4 != 0)) { // [自动静态注释] 条件判断/分支
    local_60 = (uint)*(ushort *)((long)param_2 + 0x12); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_68 = CONCAT44(0x2b,*(undefined4 *)((long)param_2 + 8)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar1 = FUN__text__0041ec00(&local_70); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (iVar1 == 1) { // [自动静态注释] 条件判断/分支
      FUN__text__00407280(param_1,param_2,param_3,param_4,&local_70); // [自动静态注释] 调用尚未恢复正式名称的函数
      param_2 = &local_70; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  for (lVar2 = *(long *)(param_1 + 0x88); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) { // [自动静态注释] 循环/迭代
    FUN__text__00407510(*param_5,param_5[1],lVar2,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__0041edb0(&local_70); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


