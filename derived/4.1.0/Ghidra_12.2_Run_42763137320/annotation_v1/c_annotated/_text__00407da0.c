/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00307DA0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00407da0; name: FUN_.text__00407da0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__00407da0(long param_1,undefined4 *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined4 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  puVar1 = _DAT_008a4b70; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(short *)(param_1 + 0x4e0) = (short)*_DAT_008a4b70;
  *(undefined4 *)(param_1 + 0x4d8) = *param_2;
  uVar2 = FUN__text__0041ec00(param_1 + 0x4d0); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((int)uVar2 == 1) { // [自动静态注释] 条件判断/分支
    if (*(char *)(param_2 + 3) != '\0') { // [自动静态注释] 条件判断/分支
      *(short *)(param_1 + 0x510) = (short)*puVar1;
      *(undefined4 *)(param_1 + 0x508) = 0x3102;
      uVar2 = FUN__text__0041ec00(param_1 + 0x500); // [自动静态注释] 调用尚未恢复正式名称的函数
      if ((int)uVar2 != 1) { // [自动静态注释] 条件判断/分支
        return uVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    if (param_2[1] == 0) { // [自动静态注释] 条件判断/分支
      uVar2 = FUN__text__004df2dc(param_1 + 0xa0,0); // [自动静态注释] 调用尚未恢复正式名称的函数
      return uVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    lVar3 = FUN__text__00400f80(5,(ulong)(uint)param_2[1] << 3); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(long *)(param_1 + 0x538) = lVar3;
    if (lVar3 != 0) { // [自动静态注释] 条件判断/分支
      lVar3 = FUN__text__00400f80(5,(ulong)(uint)param_2[1] << 3); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(long *)(param_1 + 0x540) = lVar3;
      if (lVar3 != 0) { // [自动静态注释] 条件判断/分支
        uVar2 = FUN__text__004df2dc(param_1 + 0xa0,param_2[1]); // [自动静态注释] 调用尚未恢复正式名称的函数
        return uVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    uVar2 = 0x34; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  return uVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


