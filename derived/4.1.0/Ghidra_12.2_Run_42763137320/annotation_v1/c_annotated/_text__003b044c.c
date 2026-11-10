/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002B044C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003b044c; name: FUN_.text__003b044c
 */


uint FUN__text__003b044c(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *local_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_14; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar1 = FUN__text__003b9238(*(undefined8 *)(param_1 + 0x748)); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((uVar1 & 1) == 0) { // [自动静态注释] 条件判断/分支
    FUN__text__003a1648(param_1,0); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined1 *)(param_1 + 0x85) = 1;
    FUN__text__003a14e8(*(undefined8 *)(param_1 + 2000),1); // [自动静态注释] 调用尚未恢复正式名称的函数
    if ((*(int *)(param_1 + 0x868) != -1) && // [自动静态注释] 条件判断/分支
       (plVar4 = (long *)FUN__text__003b8e30(param_1 + 0x788,0xffffffff), plVar4 != (long *)0x0)) { // [自动静态注释] 调用尚未恢复正式名称的函数
      local_50 = *plVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_58 = &local_48; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_48 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      FUN__text__003aa1c0(param_1,&local_58,0); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__003a14e8(local_48,1); // [自动静态注释] 调用尚未恢复正式名称的函数
      if (*(code **)(param_1 + 0xc0) != (code *)0x0) { // [自动静态注释] 条件判断/分支
        local_58 = (undefined8 *)*plVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        local_48 = CONCAT44(local_48._4_4_,*(undefined4 *)(param_1 + 0x868)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        local_14 = (undefined4)plVar4[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        (**(code **)(param_1 + 0xc0))(param_1 + 0xe0,&local_48,&local_58,&local_14); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    iVar5 = *(int *)(*(long *)(param_1 + 0x800) + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar6 = *(float *)(*(long *)(param_1 + 0x748) + 0x1d4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar2 = FUN__text__003b7128(*(long *)(param_1 + 0x800),param_1 + 0x7ac); // [自动静态注释] 调用尚未恢复正式名称的函数
    iVar3 = FUN__text__003b73fc(*(undefined8 *)(param_1 + 0x800),param_1 + 0x6ec); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__003adcc0(param_1,(int)((float)iVar2 - (float)(iVar3 + -1) * (fVar6 - (float)iVar5)), // [自动静态注释] 调用尚未恢复正式名称的函数
                        (int)*(float *)(*(long *)(param_1 + 0x748) + 0x1d4)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  return (uVar1 ^ 0xffffffff) & 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


