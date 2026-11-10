/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0054EFF4
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0064eff4; name: FUN_.text__0064eff4
 */


long FUN__text__0064eff4(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar2 = FUN__text__00678414(1,0x16f8); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (lVar2 == 0) { // [自动静态注释] 条件判断/分支
    return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  lVar4 = *(long *)(param_1 + 0xc10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(lVar2 + 0xc10) = lVar4;
  lVar4 = FUN__text__006783d4(lVar4 + 1); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(long *)(lVar2 + 0x1130) = lVar4;
  if (lVar4 != 0) { // [自动静态注释] 条件判断/分支
    lVar4 = FUN__text__006783d4(0x100); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(long *)(lVar2 + 0x1120) = lVar4;
    if (lVar4 != 0) { // [自动静态注释] 条件判断/分支
      *(undefined8 *)(lVar2 + 0x1128) = 0x100;
      memcpy((void *)(lVar2 + 0x668),(void *)(param_1 + 0x668),0x8e0); // [自动静态注释] 内存复制、清零或移动
      FUN__text__00656da4(lVar2 + 0x820,lVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
      memset((void *)(lVar2 + 0xc80),0,0x1f0); // [自动静态注释] 内存复制、清零或移动
      lVar4 = 0xc80; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        iVar1 = FUN__text__00667ad4(lVar2 + lVar4,*(undefined8 *)(param_1 + lVar4)); // [自动静态注释] 调用尚未恢复正式名称的函数
        if (iVar1 != 0) goto LAB__text__0064f0e8; // [自动静态注释] 条件判断/分支
        lVar4 = lVar4 + 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (lVar4 != 0xe60); // [自动静态注释] 循环/迭代
      if ((*(long *)(param_1 + 0x6f8) != 0) && (lVar4 = *(long *)(param_1 + 0xe68), lVar4 != 0)) { // [自动静态注释] 条件判断/分支
        uVar3 = FUN__text__0067827c(); // [自动静态注释] 调用尚未恢复正式名称的函数
        lVar4 = FUN__text__0066c3bc(lVar4,uVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
        *(long *)(lVar2 + 0xe68) = lVar4;
        if (lVar4 == 0) goto LAB__text__0064f0e8; // [自动静态注释] 条件判断/分支
        *(long *)(lVar2 + 0x6e8) = lVar4;
      } // [自动静态注释] 作用域/控制流边界
      iVar1 = FUN__text__00656e8c(lVar2 + 0x820,param_1 + 0x820); // [自动静态注释] 调用尚未恢复正式名称的函数
      if (*(long *)(param_1 + 0xa18) != 0) { // [自动静态注释] 条件判断/分支
        *(undefined8 *)(lVar2 + 0xf60) = *(undefined8 *)(lVar2 + 0xa18);
      } // [自动静态注释] 作用域/控制流边界
      if (iVar1 == 0) { // [自动静态注释] 条件判断/分支
        *(undefined8 *)(lVar2 + 0x1100) = 0;
        *(undefined8 *)(lVar2 + 0x1118) = 0xffffffffffffffff;
        *(undefined4 *)(lVar2 + 0xfac) = *(undefined4 *)(param_1 + 0xfac);
        *(byte *)(lVar2 + 0x10fc) =
             *(byte *)(lVar2 + 0x10fc) & 0xfe | *(byte *)(param_1 + 0x10fc) & 1;
        if (*(long *)(param_1 + 0xf70) != 0) { // [自动静态注释] 条件判断/分支
          lVar4 = FUN__text__00651a90(param_1,*(undefined8 *)(*(long *)(param_1 + 0xf70) + 0x800), // [自动静态注释] 调用尚未恢复正式名称的函数
                                      *(undefined8 *)(lVar2 + 0xf70),
                                      *(ulong *)(param_1 + 0xf40) >> 5 & 1);
          *(long *)(lVar2 + 0xf70) = lVar4;
          if (lVar4 == 0) goto LAB__text__0064f0e8; // [自动静态注释] 条件判断/分支
        } // [自动静态注释] 作用域/控制流边界
        if (*(long *)(param_1 + 0xf58) != 0) { // [自动静态注释] 条件判断/分支
          lVar4 = FUN__text__0066bd38(); // [自动静态注释] 调用尚未恢复正式名称的函数
          *(long *)(lVar2 + 0xf58) = lVar4;
          if (lVar4 == 0) goto LAB__text__0064f0e8; // [自动静态注释] 条件判断/分支
        } // [自动静态注释] 作用域/控制流边界
        if (*(long *)(param_1 + 0xf48) != 0) { // [自动静态注释] 条件判断/分支
          lVar4 = FUN__text__00678404(); // [自动静态注释] 调用尚未恢复正式名称的函数
          *(long *)(lVar2 + 0xf48) = lVar4;
          if (lVar4 == 0) goto LAB__text__0064f0e8; // [自动静态注释] 条件判断/分支
          *(byte *)(lVar2 + 0xf68) = *(byte *)(lVar2 + 0xf68) | 1;
        } // [自动静态注释] 作用域/控制流边界
        if (*(long *)(param_1 + 0xf50) != 0) { // [自动静态注释] 条件判断/分支
          lVar4 = FUN__text__00678404(); // [自动静态注释] 调用尚未恢复正式名称的函数
          *(long *)(lVar2 + 0xf50) = lVar4;
          if (lVar4 == 0) goto LAB__text__0064f0e8; // [自动静态注释] 条件判断/分支
          *(byte *)(lVar2 + 0xf68) = *(byte *)(lVar2 + 0xf68) | 2;
        } // [自动静态注释] 作用域/控制流边界
        if (((*(long *)(lVar2 + 0xdd8) == 0) || (iVar1 = FUN__text__00677d28(lVar2), iVar1 == 0)) && // [自动静态注释] 条件判断/分支
           (iVar1 = FUN__text__0064f27c(lVar2,lVar2 + 0x1288,*(undefined8 *)(param_1 + 0x1288)), // [自动静态注释] 调用尚未恢复正式名称的函数
           iVar1 == 0)) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          FUN__text__006535fc(lVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
          *(undefined4 *)(lVar2 + 0x16f0) = 0xc0dedbad;
          return lVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
LAB__text__0064f0e8: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  FUN__text__0066bd88(*(undefined8 *)(lVar2 + 0xf58)); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined8 *)(lVar2 + 0xf58) = 0;
  FUN__text__006783e4(*(undefined8 *)(lVar2 + 0x1130)); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined8 *)(lVar2 + 0x1130) = 0;
  FUN__text__006783e4(*(undefined8 *)(lVar2 + 0x1120)); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined8 *)(lVar2 + 0x1120) = 0;
  FUN__text__006783e4(*(undefined8 *)(lVar2 + 0xf48)); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined8 *)(lVar2 + 0xf48) = 0;
  FUN__text__006783e4(*(undefined8 *)(lVar2 + 0xf50)); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined8 *)(lVar2 + 0xf50) = 0;
  FUN__text__0066fe70(lVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__006783e4(lVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
  return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


