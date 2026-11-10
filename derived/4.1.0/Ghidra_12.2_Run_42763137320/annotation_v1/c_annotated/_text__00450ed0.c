/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00350ED0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00450ed0; name: FUN_.text__00450ed0
 */


int FUN__text__00450ed0(undefined8 param_1,long param_2,uint param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int local_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int local_54; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_50 [8]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  short *local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_28 [4]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_24 [4]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar2 = *(long *)(param_2 + 0x2a0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((*(long *)(param_2 + 0x340) != 0) && (*(int *)(param_2 + 0x348) != 0)) { // [自动静态注释] 条件判断/分支
    iVar1 = FUN__text__004aed30(*(long *)(param_2 + 0x340),*(int *)(param_2 + 0x348),auStack_50,0, // [自动静态注释] 调用尚未恢复正式名称的函数
                                auStack_24,auStack_28,&local_54,&local_58,0,0,1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (iVar1 != 1) { // [自动静态注释] 条件判断/分支
      FUN__text__00475a44(param_2,1); // [自动静态注释] 调用尚未恢复正式名称的函数
      return iVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    if (*local_48 == -2) { // [自动静态注释] 条件判断/分支
      *(undefined4 *)(lVar2 + 0x18) = 0x10001;
    } // [自动静态注释] 作用域/控制流边界
    if ((uint)(local_54 + local_58) <= *(uint *)(param_2 + 0x348)) { // [自动静态注释] 条件判断/分支
      *(ushort *)(lVar2 + 0xc) = *(ushort *)(lVar2 + 0xc) & 0xff8f | 0xc;
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  if ((((*(ushort *)(lVar2 + 0xc) & 0x7c) == 0xc) && (*(long *)(param_2 + 0x340) == 0)) || // [自动静态注释] 条件判断/分支
     (lVar2 = FUN__text__0042843c(*(ushort *)(lVar2 + 0xc) >> 2 & 0x1f,*(undefined4 *)(lVar2 + 0x18) // [自动静态注释] 调用尚未恢复正式名称的函数
                                  ,param_2), lVar2 == 0)) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__00475a44(param_2,1); // [自动静态注释] 调用尚未恢复正式名称的函数
    iVar1 = 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    iVar1 = FUN__text__00451000(param_1,lVar2,param_3 & 1,1); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  return iVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


