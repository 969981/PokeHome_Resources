/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0057D718
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0067d718; name: FUN_.text__0067d718
 */


undefined8 FUN__text__0067d718(long param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar2 = FUN__text__00680914(param_1,*(undefined4 *)(param_2 + 8)); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (lVar2 == 0) { // [自动静态注释] 条件判断/分支
    return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  if (((*(byte *)(lVar2 + 0xe4) >> 1 & 1) == 0) && // [自动静态注释] 条件判断/分支
     (*(int *)(lVar2 + 0xdc) != 3 && *(int *)(lVar2 + 0xdc) != 5)) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (((*(byte *)(param_1 + 0x99c) >> 2 & 1) == 0) && // [自动静态注释] 条件判断/分支
       (((*(byte *)(param_2 + 0xd) & 1) != 0 && (iVar1 = FUN__text__00685518(lVar2), iVar1 != 0)))) // [自动静态注释] 调用尚未恢复正式名称的函数
    { // [自动静态注释] 作用域/控制流边界
      uVar3 = FUN__text__0067ad9c(param_1,*(undefined4 *)(lVar2 + 0xb8),1); // [自动静态注释] 调用尚未恢复正式名称的函数
      if ((int)uVar3 < -900) { // [自动静态注释] 条件判断/分支
        return uVar3; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    else if ((*(code **)(param_1 + 0x7e8) != (code *)0x0) && // [自动静态注释] 条件判断/分支
            (iVar1 = (**(code **)(param_1 + 0x7e8)) // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                               (param_1,param_2,*(undefined8 *)(param_1 + 0x8b8)), iVar1 != 0)) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      return 0xfffffc7a; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    if ((((*(byte *)(param_2 + 0xd) & 1) != 0) && // [自动静态注释] 条件判断/分支
        (FUN__text__00685b30(lVar2,1), ((*(byte *)(lVar2 + 0xe5) ^ 0xff) & 3) == 0)) && // [自动静态注释] 调用尚未恢复正式名称的函数
       (uVar3 = FUN__text__0067aeb8(param_1,*(undefined4 *)(lVar2 + 0xb8),0), (int)uVar3 < -900)) { // [自动静态注释] 调用尚未恢复正式名称的函数
      return uVar3; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


