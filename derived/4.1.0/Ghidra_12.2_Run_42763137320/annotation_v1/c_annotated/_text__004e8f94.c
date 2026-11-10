/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003E8F94
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004e8f94; name: FUN_.text__004e8f94
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN__text__004e8f94(long *param_1,long param_2,undefined8 param_3,uint param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_24; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar4 = FUN__text__00400f80(0,0x88); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (lVar4 != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__004ea2b8(lVar4,param_1,param_2,param_3,param_4 & 1); // [自动静态注释] 调用尚未恢复正式名称的函数
    plVar5 = (long *)(**(code **)(*param_1 + 0xd0))(param_1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (plVar5 != (long *)0x0) { // [自动静态注释] 条件判断/分支
      uVar6 = (**(code **)(*plVar5 + 0x128))(plVar5,1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((uVar6 & 1) != 0) { // [自动静态注释] 条件判断/分支
        FUN__text__00464fac(plVar5); // [自动静态注释] 调用尚未恢复正式名称的函数
        if (DAT_00aeb9e8 == (long *)0x0) { // [自动静态注释] 条件判断/分支
          DAT_00aeb9e0 = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        plVar5 = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        param_1[0xe] = (long)DAT_00aeb9e8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        DAT_00aeb9e8 = plVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        FUN__text__004f5ec4(param_1,lVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
        puVar1 = _DAT_008a45d8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (*(int *)(param_2 + 0x14) == 0) { // [自动静态注释] 条件判断/分支
          return 2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
        } // [自动静态注释] 作用域/控制流边界
        local_24 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar2 = FUN__text__0048de00(*_DAT_008a45d8,*(int *)(param_2 + 0x14),param_1 + 3,param_3, // [自动静态注释] 调用尚未恢复正式名称的函数
                                    &local_24); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        FUN__text__004f60a8(param_1,local_24); // [自动静态注释] 调用尚未恢复正式名称的函数
        if (((local_24._2_1_ >> 5 & 1) != 0) && // [自动静态注释] 条件判断/分支
           (iVar3 = FUN__text__004f6a60(_DAT_008a5080,*(undefined4 *)(param_2 + 0x14)), iVar3 != 1)) // [自动静态注释] 调用尚未恢复正式名称的函数
        { // [自动静态注释] 作用域/控制流边界
          FUN__text__004f60a8(param_1,local_24 & 0xffdfffff); // [自动静态注释] 调用尚未恢复正式名称的函数
        } // [自动静态注释] 作用域/控制流边界
        FUN__text__0048d4d0(*puVar1,*(undefined4 *)(param_2 + 0x14)); // [自动静态注释] 调用尚未恢复正式名称的函数
        return uVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      (**(code **)(*plVar5 + 0x130))(plVar5,1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      FUN__text__00464fec(plVar5); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    FUN__text__004ea390(lVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__00400fc0(0,lVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  return 2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


