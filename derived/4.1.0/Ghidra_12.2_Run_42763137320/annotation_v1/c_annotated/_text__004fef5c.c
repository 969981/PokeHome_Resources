/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003FEF5C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004fef5c; name: FUN_.text__004fef5c
 */


undefined8 FUN__text__004fef5c(long *param_1,undefined8 *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined2 local_34; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_18; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_14 [4]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  local_18 = *(undefined4 *)(*param_1 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = *(uint *)(*param_1 + 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = (**(code **)*param_2)(param_2,&local_18,4,auStack_14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((uVar3 & 1) != 0) { // [自动静态注释] 条件判断/分支
    local_34 = CONCAT11(local_34._1_1_,(char)uVar1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = (**(code **)*param_2)(param_2,&local_34,1,auStack_14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((uVar3 & 1) != 0) { // [自动静态注释] 条件判断/分支
      if ((uVar1 & 0xfffffffd) != 1) { // [自动静态注释] 条件判断/分支
        local_34 = (ushort)*(undefined4 *)(*param_1 + 0x28); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar3 = (**(code **)*param_2)(param_2,&local_34,2,auStack_14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (((uVar3 & 1) == 0) || // [自动静态注释] 条件判断/分支
           (iVar2 = (**(code **)(*(long *)param_1[2] + 0x28)) // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                              ((long *)param_1[2],param_2,*(undefined4 *)(*param_1 + 0x28)), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
           iVar2 != 1)) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          return 2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
      local_34 = CONCAT11(local_34._1_1_,*(undefined1 *)((long)param_1 + 10)) & 0xff03; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar3 = (**(code **)*param_2)(param_2,param_1 + 1,2,auStack_14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (((uVar3 & 1) != 0) && // [自动静态注释] 条件判断/分支
         (uVar3 = (**(code **)*param_2)(param_2,&local_34,1,auStack_14), (uVar3 & 1) != 0)) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return 2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


