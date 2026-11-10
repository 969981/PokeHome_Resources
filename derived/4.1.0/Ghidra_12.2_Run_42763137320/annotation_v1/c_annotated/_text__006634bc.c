/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005634BC
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006634bc; name: FUN_.text__006634bc
 */


undefined8 // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
FUN__text__006634bc(undefined8 param_1,undefined8 param_2,undefined4 param_3,void *param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                   ulong param_5,long *param_6) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  size_t __n; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar1 = FUN__text__0067fd24(param_1,param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((lVar1 == 0) || (lVar3 = *(long *)(lVar1 + 0x1e8), lVar3 == 0)) { // [自动静态注释] 条件判断/分支
    uVar2 = 0xfffffc7a; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar4 = *(ulong *)(lVar3 + 0x260); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    __n = uVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (param_5 <= uVar4) { // [自动静态注释] 条件判断/分支
      __n = param_5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    memcpy((void *)(*(long *)(lVar3 + 600) + *(long *)(lVar3 + 0x268)),param_4,__n); // [自动静态注释] 内存复制、清零或移动
    *(size_t *)(lVar3 + 0x260) = *(long *)(lVar3 + 0x260) - __n;
    *(size_t *)(lVar3 + 0x268) = *(long *)(lVar3 + 0x268) + __n;
    *(long *)(lVar1 + 0x1520) = *(long *)(lVar1 + 0x1520) + 1;
    param_6[0xbc] = param_6[0xbc] + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*param_6 != lVar1) { // [自动静态注释] 条件判断/分支
      FUN__text__0065a050(lVar1,0,6); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    if (param_5 < uVar4 || param_5 - uVar4 == 0) { // [自动静态注释] 条件判断/分支
      if (*param_6 == lVar1) { // [自动静态注释] 条件判断/分支
        return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      *(ulong *)(lVar3 + 0x248) = param_5 - uVar4;
      *(ulong *)(lVar3 + 0x240) = (long)param_4 + uVar4;
    } // [自动静态注释] 作用域/控制流边界
    uVar2 = 0xfffffdf2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined4 *)(*(long *)(lVar1 + 0x10) + 0x5d8) = param_3;
  } // [自动静态注释] 作用域/控制流边界
  return uVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


