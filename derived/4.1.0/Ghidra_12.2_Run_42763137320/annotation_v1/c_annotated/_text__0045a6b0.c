/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0035A6B0
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0045a6b0; name: FUN_.text__0045a6b0
 */


void FUN__text__0045a6b0(long param_1,long param_2,long param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  char cVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  size_t __n; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(int *)(param_1 + 0x148) != 0) { // [自动静态注释] 条件判断/分支
    lVar7 = *(long *)(param_1 + 0x140); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      bVar4 = *(byte *)(lVar7 + 0xc0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar9 = (ulong)*(uint *)(lVar7 + 0x10c) & 0xff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar8 = (uint)uVar9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (uVar8 == bVar4) { // [自动静态注释] 条件判断/分支
LAB__text__0045a7a0: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        if (*(long *)(lVar7 + 0xe8) != 0) { // [自动静态注释] 条件判断/分支
          uVar3 = *(undefined8 *)(lVar7 + 0xf8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(undefined8 *)(lVar7 + 0xf8) = *(undefined8 *)(lVar7 + 0x100);
          *(undefined8 *)(lVar7 + 0x100) = uVar3;
          *(float *)(lVar7 + 0x58) = *(float *)(lVar7 + 0x58) * *(float *)(param_2 + 4);
          *(float *)(lVar7 + 0x5c) = *(float *)(lVar7 + 0x5c) + *(float *)(param_2 + 8);
          *(float *)(lVar7 + 0x60) = *(float *)(lVar7 + 0x60) + *(float *)(param_2 + 0xc);
          *(float *)(lVar7 + 100) = *(float *)(lVar7 + 100) + *(float *)(param_2 + 0x10);
          *(float *)(lVar7 + 0x68) = *(float *)(lVar7 + 0x68) * *(float *)(param_2 + 0x14);
          cVar1 = *(char *)(lVar7 + 0x6d); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (*(char *)(param_2 + 0x19) != '\0') { // [自动静态注释] 条件判断/分支
            cVar1 = *(char *)(param_2 + 0x19); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } // [自动静态注释] 作用域/控制流边界
          *(char *)(lVar7 + 0x6d) = cVar1;
          *(byte *)(lVar7 + 0x6e) = *(byte *)(lVar7 + 0x6e) & *(byte *)(param_2 + 0x1a);
          FUN__text__0047dd5c(uVar8 != bVar4 || *(char *)(param_2 + 0x1c) != '\0', // [自动静态注释] 调用尚未恢复正式名称的函数
                              *(undefined4 *)(lVar7 + 0xc0),param_1,lVar7);
          if (param_3 != 0) { // [自动静态注释] 条件判断/分支
            FUN__text__00480a40(param_3,param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
          } // [自动静态注释] 作用域/控制流边界
          if ((uVar8 != bVar4) && (*(char *)(lVar7 + 0x108) != '\0')) { // [自动静态注释] 条件判断/分支
            uVar8 = *(uint *)(lVar7 + 0xc0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            if ((*(uint *)(lVar7 + 0xb8) & 0xf00) != 0x300) { // [自动静态注释] 条件判断/分支
              uVar8 = *(uint *)(lVar7 + 0xb8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            } // [自动静态注释] 作用域/控制流边界
            lVar6 = (ulong)((uVar8 & 0xff) + 3 & 0x1fc) * (ulong)(*(uint *)(lVar7 + 0xc0) & 0xff); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            if ((int)lVar6 != 0) { // [自动静态注释] 条件判断/分支
              memcpy(*(void **)(lVar7 + 0x100),*(void **)(lVar7 + 0xf8),lVar6 * 4); // [自动静态注释] 内存复制、清零或移动
            } // [自动静态注释] 作用域/控制流边界
          } // [自动静态注释] 作用域/控制流边界
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
      else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        iVar5 = FUN__text__00451e0c(); // [自动静态注释] 调用尚未恢复正式名称的函数
        if (iVar5 == 1) { // [自动静态注释] 条件判断/分支
          uVar2 = *(uint *)(lVar7 + 0xc0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if ((*(uint *)(lVar7 + 0xb8) & 0xf00) != 0x300) { // [自动静态注释] 条件判断/分支
            uVar2 = *(uint *)(lVar7 + 0xb8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } // [自动静态注释] 作用域/控制流边界
          FUN__text__0045cc00(lVar7 + 0xe8); // [自动静态注释] 调用尚未恢复正式名称的函数
          iVar5 = FUN__text__0045cb64(lVar7 + 0xe8,uVar9,uVar2 & 0xff); // [自动静态注释] 调用尚未恢复正式名称的函数
          if (iVar5 == 1) { // [自动静态注释] 条件判断/分支
            lVar6 = ((uVar2 & 0xff) + 3 & 0x1fc) * uVar9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            if ((int)lVar6 != 0) { // [自动静态注释] 条件判断/分支
              __n = lVar6 * 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              memset(*(void **)(lVar7 + 0x100),0,__n); // [自动静态注释] 内存复制、清零或移动
              memset(*(void **)(lVar7 + 0xf8),0,__n); // [自动静态注释] 内存复制、清零或移动
            } // [自动静态注释] 作用域/控制流边界
            goto LAB__text__0045a7a0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          } // [自动静态注释] 作用域/控制流边界
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
      lVar7 = lVar7 + 0x118; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (lVar7 != *(long *)(param_1 + 0x140) + (ulong)*(uint *)(param_1 + 0x148) * 0x118); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


