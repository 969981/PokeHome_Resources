/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00573F40
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00673f40; name: FUN_.text__00673f40
 */


undefined8 // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
FUN__text__00673f40(undefined8 *param_1,undefined4 param_2,long param_3,long param_4,long *param_5) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *param_5 = 0;
  local_38 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar1 = FUN__text__0064fa18(*param_1,0,1); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (-1 < iVar1) { // [自动静态注释] 条件判断/分支
    lVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      iVar1 = FUN__text__00666b6c(param_2,0xffffffff,0xffffffff,iVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
      if (iVar1 < 1) { // [自动静态注释] 条件判断/分支
        return 0xffffffff; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      uVar2 = FUN__text__006677ac(param_2,param_3,param_4,&local_38); // [自动静态注释] 调用尚未恢复正式名称的函数
      lVar3 = param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((int)uVar2 != 0x51) { // [自动静态注释] 条件判断/分支
        if ((int)uVar2 != 0) { // [自动静态注释] 条件判断/分支
          return uVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
        } // [自动静态注释] 作用域/控制流边界
        lVar3 = param_4 - local_38; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (lVar3 == 0) { // [自动静态注释] 条件判断/分支
          *param_5 = param_4 + lVar4;
          return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
        } // [自动静态注释] 作用域/控制流边界
        if (local_38 == 0) { // [自动静态注释] 条件判断/分支
          return 0xffffffff; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
        } // [自动静态注释] 作用域/控制流边界
        param_3 = param_3 + local_38; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        lVar4 = local_38 + lVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      iVar1 = FUN__text__0064fa18(*param_1,0,1); // [自动静态注释] 调用尚未恢复正式名称的函数
      param_4 = lVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (-1 < iVar1); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  return 0x1c; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


