/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003EA0F0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004ea0f0; name: FUN_.text__004ea0f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004ea0f0(long param_1,ulong param_2,int param_3,uint param_4,undefined4 param_5) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint local_78; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_74 [36]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint local_34; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (param_4 != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__004e9a18(param_1,param_2,auStack_74); // [自动静态注释] 调用尚未恢复正式名称的函数
    if ((param_4 >> 0xd & 1) != 0) { // [自动静态注释] 条件判断/分支
      FUN__text__004f4830(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x78),param_5,auStack_74, // [自动静态注释] 调用尚未恢复正式名称的函数
                          param_2 & 0xffffffff,param_3); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    iVar3 = (int)param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (((iVar3 < 1) && ((param_4 >> 10 & 1) != 0)) && (0 < param_3 + iVar3)) { // [自动静态注释] 条件判断/分支
      FUN__text__0048d970(*_DAT_008a45d8,param_5,0x400,auStack_74); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    FUN__text__004f48fc(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x78),param_2 & 0xffffffff, // [自动静态注释] 调用尚未恢复正式名称的函数
                        param_3,&local_34,&local_38,&local_78); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    puVar1 = _DAT_008a45d8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (((param_4 >> 9 & 1) != 0) && (local_34 != 0)) { // [自动静态注释] 条件判断/分支
      uVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        FUN__text__0048d970(*puVar1,param_5,0x200,auStack_74); // [自动静态注释] 调用尚未恢复正式名称的函数
        uVar4 = uVar4 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (uVar4 < local_34); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
    puVar1 = _DAT_008a45d8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (((param_4 >> 8 & 1) != 0) && (local_38 != 0)) { // [自动静态注释] 条件判断/分支
      uVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        FUN__text__0048d970(*puVar1,param_5,0x100,auStack_74); // [自动静态注释] 调用尚未恢复正式名称的函数
        uVar4 = uVar4 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (uVar4 < local_38); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
    puVar1 = _DAT_008a45d8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (((param_4 >> 0xc & 1) != 0) && (local_78 != 0)) { // [自动静态注释] 条件判断/分支
      uVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        FUN__text__0048d970(*puVar1,param_5,0x1000,auStack_74); // [自动静态注释] 调用尚未恢复正式名称的函数
        uVar4 = uVar4 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (uVar4 < local_78); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
    if (((param_4 >> 0xb & 1) != 0) && // [自动静态注释] 条件判断/分支
       (iVar2 = FUN__text__004f4810(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x78)), // [自动静态注释] 调用尚未恢复正式名称的函数
       iVar3 <= iVar2 && iVar2 < param_3 + iVar3)) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      FUN__text__0048d970(*_DAT_008a45d8,param_5,0x800,auStack_74); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


